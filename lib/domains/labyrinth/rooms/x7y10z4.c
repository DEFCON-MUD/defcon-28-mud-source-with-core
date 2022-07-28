inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 10, 4 }));
  set_short( "Corridor - x7y10z4" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y10z4.c",
  "south" : DIR+"/rooms/x7y9z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
