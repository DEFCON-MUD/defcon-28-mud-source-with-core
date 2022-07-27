inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 48, 9 }));
  set_short( "Hallway - x41y48z9" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y48z9.c",
  "east" : DIR+"/rooms/x42y48z9.c",
  "north" : DIR+"/rooms/x41y49z9.c",
  "south" : DIR+"/rooms/x41y47z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
