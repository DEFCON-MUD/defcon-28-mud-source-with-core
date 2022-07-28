inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 20, 4 }));
  set_short( "Passage - x54y20z4" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y20z4.c",
  "east" : DIR+"/rooms/x55y20z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
