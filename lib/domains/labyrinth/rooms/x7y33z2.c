inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 33, 2 }));
  set_short( "Corridor - x7y33z2" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y34z2.c",
  "south" : DIR+"/rooms/x7y32z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
