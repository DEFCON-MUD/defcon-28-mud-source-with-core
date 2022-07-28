inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 54, 2 }));
  set_short( "Passage - x31y54z2" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y54z2.c",
  "south" : DIR+"/rooms/x31y53z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
