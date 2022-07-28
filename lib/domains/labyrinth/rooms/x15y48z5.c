inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 48, 5 }));
  set_short( "Passage - x15y48z5" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y48z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
