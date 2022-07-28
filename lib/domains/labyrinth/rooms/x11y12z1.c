inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 12, 1 }));
  set_short( "Passage - x11y12z1" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y12z1.c",
  "north" : DIR+"/rooms/x11y13z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
