inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 36, 5 }));
  set_short( "Passage - x9y36z5" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y37z5.c",
  "south" : DIR+"/rooms/x9y35z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
