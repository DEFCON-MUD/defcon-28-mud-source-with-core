inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 50, 1 }));
  set_short( "Corridor - x50y50z1" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y50z1.c",
  "east" : DIR+"/rooms/x51y50z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
