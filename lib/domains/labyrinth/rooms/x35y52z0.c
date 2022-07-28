inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 52, 0 }));
  set_short( "Passage - x35y52z0" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y52z0.c",
  "north" : DIR+"/rooms/x35y53z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
