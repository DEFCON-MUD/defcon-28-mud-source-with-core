inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 4, 2 }));
  set_short( "Hallway - x58y4z2" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y4z2.c",
  "east" : DIR+"/rooms/x59y4z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
