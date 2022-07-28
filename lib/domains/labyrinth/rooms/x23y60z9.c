inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 60, 9 }));
  set_short( "Hallway - x23y60z9" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y60z9.c",
  "east" : DIR+"/rooms/x24y60z9.c",
  "south" : DIR+"/rooms/x23y59z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
