inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 44, 1 }));
  set_short( "Passage - x13y44z1" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y44z1.c",
  "north" : DIR+"/rooms/x13y45z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
