inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 7, 6 }));
  set_short( "Passage - x15y7z6" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y8z6.c",
  "south" : DIR+"/rooms/x15y6z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
