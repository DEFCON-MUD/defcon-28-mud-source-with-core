inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 35, 1 }));
  set_short( "Corridor - x61y35z1" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y36z1.c",
  "south" : DIR+"/rooms/x61y34z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
