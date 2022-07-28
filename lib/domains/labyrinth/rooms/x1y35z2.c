inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 35, 2 }));
  set_short( "Corridor - x1y35z2" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y36z2.c",
  "south" : DIR+"/rooms/x1y34z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
