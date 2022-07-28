inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 9, 5 }));
  set_short( "Corridor - x5y9z5" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y10z5.c",
  "south" : DIR+"/rooms/x5y8z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
