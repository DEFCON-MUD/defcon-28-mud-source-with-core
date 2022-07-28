inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 53, 5 }));
  set_short( "Corridor - x15y53z5" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y54z5.c",
  "south" : DIR+"/rooms/x15y52z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
