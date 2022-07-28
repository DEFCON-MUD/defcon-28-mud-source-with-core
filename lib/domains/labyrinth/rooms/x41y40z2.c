inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 40, 2 }));
  set_short( "Hallway - x41y40z2" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y40z2.c",
  "east" : DIR+"/rooms/x42y40z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
