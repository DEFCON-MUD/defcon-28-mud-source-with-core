inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 43, 4 }));
  set_short( "Corridor - x31y43z4" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y44z4.c",
  "south" : DIR+"/rooms/x31y42z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
