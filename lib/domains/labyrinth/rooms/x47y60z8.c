inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 60, 8 }));
  set_short( "Corridor - x47y60z8" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y60z8.c",
  "north" : DIR+"/rooms/x47y61z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
