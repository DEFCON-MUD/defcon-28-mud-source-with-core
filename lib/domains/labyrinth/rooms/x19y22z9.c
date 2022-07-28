inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 22, 9 }));
  set_short( "Passage - x19y22z9" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y22z9.c",
  "east" : DIR+"/rooms/x20y22z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
