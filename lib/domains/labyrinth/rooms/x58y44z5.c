inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 44, 5 }));
  set_short( "Hallway - x58y44z5" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y44z5.c",
  "east" : DIR+"/rooms/x59y44z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
