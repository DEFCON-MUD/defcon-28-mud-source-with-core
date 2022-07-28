inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 61, 8 }));
  set_short( "Hallway - x19y61z8" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y62z8.c",
  "south" : DIR+"/rooms/x19y60z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
