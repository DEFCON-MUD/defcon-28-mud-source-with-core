inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 14, 4 }));
  set_short( "Hallway - x6y14z4" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y14z4.c",
  "east" : DIR+"/rooms/x7y14z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
