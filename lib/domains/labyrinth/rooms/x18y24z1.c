inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 24, 1 }));
  set_short( "Hallway - x18y24z1" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y24z1.c",
  "east" : DIR+"/rooms/x19y24z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
