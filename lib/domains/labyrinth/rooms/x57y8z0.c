inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 8, 0 }));
  set_short( "Passage - x57y8z0" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y8z0.c",
  "east" : DIR+"/rooms/x58y8z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
