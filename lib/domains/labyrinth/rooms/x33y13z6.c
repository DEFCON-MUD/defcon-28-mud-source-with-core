inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 13, 6 }));
  set_short( "Corridor - x33y13z6" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y14z6.c",
  "south" : DIR+"/rooms/x33y12z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
