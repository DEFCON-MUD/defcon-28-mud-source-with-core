inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 44, 8 }));
  set_short( "Passage - x43y44z8" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y44z8.c",
  "north" : DIR+"/rooms/x43y45z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
