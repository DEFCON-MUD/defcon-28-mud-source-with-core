inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 44, 1 }));
  set_short( "Hallway - x26y44z1" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y44z1.c",
  "east" : DIR+"/rooms/x27y44z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
