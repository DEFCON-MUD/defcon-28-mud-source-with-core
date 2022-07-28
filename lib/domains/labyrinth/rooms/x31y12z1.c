inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 12, 1 }));
  set_short( "Hallway - x31y12z1" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y12z1.c",
  "east" : DIR+"/rooms/x32y12z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
