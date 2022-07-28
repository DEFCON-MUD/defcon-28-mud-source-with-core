inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 40, 2 }));
  set_short( "Passage - x54y40z2" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y40z2.c",
  "east" : DIR+"/rooms/x55y40z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
