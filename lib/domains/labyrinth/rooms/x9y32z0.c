inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 32, 0 }));
  set_short( "Passage - x9y32z0" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y32z0.c",
  "south" : DIR+"/rooms/x9y31z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
