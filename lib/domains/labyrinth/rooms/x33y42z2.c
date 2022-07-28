inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 42, 2 }));
  set_short( "Passage - x33y42z2" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y42z2.c",
  "north" : DIR+"/rooms/x33y43z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
