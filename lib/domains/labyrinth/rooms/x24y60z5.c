inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 60, 5 }));
  set_short( "Hallway - x24y60z5" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y60z5.c",
  "east" : DIR+"/rooms/x25y60z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
