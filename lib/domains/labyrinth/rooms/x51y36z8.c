inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 36, 8 }));
  set_short( "Passage - x51y36z8" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y36z8.c",
  "north" : DIR+"/rooms/x51y37z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
