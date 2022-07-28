inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 48, 7 }));
  set_short( "Corridor - x12y48z7" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y48z7.c",
  "east" : DIR+"/rooms/x13y48z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
