inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 26, 0 }));
  set_short( "Hallway - x34y26z0" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y26z0.c",
  "east" : DIR+"/rooms/x35y26z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
