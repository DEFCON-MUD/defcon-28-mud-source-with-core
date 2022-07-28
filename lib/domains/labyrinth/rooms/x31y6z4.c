inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 6, 4 }));
  set_short( "Passage - x31y6z4" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y6z4.c",
  "north" : DIR+"/rooms/x31y7z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
