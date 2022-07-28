inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 40, 1 }));
  set_short( "Passage - x21y40z1" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y40z1.c",
  "south" : DIR+"/rooms/x21y39z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
