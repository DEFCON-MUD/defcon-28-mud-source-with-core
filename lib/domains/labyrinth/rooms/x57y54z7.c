inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 54, 7 }));
  set_short( "Passage - x57y54z7" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y54z7.c",
  "east" : DIR+"/rooms/x58y54z7.c",
  "north" : DIR+"/rooms/x57y55z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
