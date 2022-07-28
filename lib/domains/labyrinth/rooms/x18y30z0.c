inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 30, 0 }));
  set_short( "Hallway - x18y30z0" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y30z0.c",
  "east" : DIR+"/rooms/x19y30z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
