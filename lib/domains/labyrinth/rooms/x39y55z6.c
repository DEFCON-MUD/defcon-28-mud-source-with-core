inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 55, 6 }));
  set_short( "Corridor - x39y55z6" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y56z6.c",
  "south" : DIR+"/rooms/x39y54z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
