inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 5, 1 }));
  set_short( "Corridor - x15y5z1" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y6z1.c",
  "south" : DIR+"/rooms/x15y4z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
