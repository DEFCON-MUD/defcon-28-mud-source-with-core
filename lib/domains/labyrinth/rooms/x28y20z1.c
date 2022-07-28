inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 20, 1 }));
  set_short( "Passage - x28y20z1" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y20z1.c",
  "east" : DIR+"/rooms/x29y20z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
