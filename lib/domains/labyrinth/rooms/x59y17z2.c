inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 17, 2 }));
  set_short( "Corridor - x59y17z2" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y18z2.c",
  "south" : DIR+"/rooms/x59y16z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
