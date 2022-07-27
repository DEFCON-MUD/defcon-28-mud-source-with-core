inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 48, 4 }));
  set_short( "Hallway - x37y48z4" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y48z4.c",
  "east" : DIR+"/rooms/x38y48z4.c",
  "north" : DIR+"/rooms/x37y49z4.c",
  "south" : DIR+"/rooms/x37y47z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
