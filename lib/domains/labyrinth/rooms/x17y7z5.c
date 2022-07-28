inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 7, 5 }));
  set_short( "Hallway - x17y7z5" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y8z5.c",
  "south" : DIR+"/rooms/x17y6z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
