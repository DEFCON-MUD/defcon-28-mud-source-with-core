inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 48, 0 }));
  set_short( "Corridor - x58y48z0" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y48z0.c",
  "east" : DIR+"/rooms/x59y48z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
