inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 35, 7 }));
  set_short( "Corridor - x3y35z7" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y36z7.c",
  "south" : DIR+"/rooms/x3y34z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
