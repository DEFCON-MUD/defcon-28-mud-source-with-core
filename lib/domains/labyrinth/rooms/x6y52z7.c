inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 52, 7 }));
  set_short( "Corridor - x6y52z7" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y52z7.c",
  "east" : DIR+"/rooms/x7y52z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
