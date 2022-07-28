inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 34, 1 }));
  set_short( "Corridor - x15y34z1" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y34z1.c",
  "south" : DIR+"/rooms/x15y33z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
