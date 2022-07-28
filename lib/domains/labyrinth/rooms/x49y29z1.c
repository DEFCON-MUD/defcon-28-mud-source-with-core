inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 29, 1 }));
  set_short( "Passage - x49y29z1" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y30z1.c",
  "south" : DIR+"/rooms/x49y28z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
