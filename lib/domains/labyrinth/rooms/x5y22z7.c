inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 22, 7 }));
  set_short( "Passage - x5y22z7" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y22z7.c",
  "south" : DIR+"/rooms/x5y21z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
