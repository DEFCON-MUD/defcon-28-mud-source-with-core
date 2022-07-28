inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 14, 6 }));
  set_short( "Corridor - x13y14z6" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y14z6.c",
  "south" : DIR+"/rooms/x13y13z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
