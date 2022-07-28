inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 52, 7 }));
  set_short( "Hallway - x15y52z7" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y52z7.c",
  "east" : DIR+"/rooms/x16y52z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
